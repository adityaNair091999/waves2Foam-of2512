#!/bin/bash
list=`ls *.C *.H`
for i in $list
do
    echo "============ BEGIN: "$i" ============"
    if [ "$i" == "waveFoam.C" ]
    then
        diff $i $FOAM_APP/solvers/multiphase/interFoam/interFoam.C
    else
        diff $i $FOAM_APP/solvers/multiphase/interFoam/$i
    fi
    echo
    echo "============= END: "$i" ============="
    echo
done
