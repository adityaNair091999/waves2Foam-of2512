// Local copy from v2206 overInterDyMFoam/createDyMControls.H
// Ensures adjustFringe, massFluxInterpolation and ddtCorr are always declared
// regardless of which system createDyMControls.H gets found first.

bool correctPhi
(
    pimple.dict().getOrDefault("correctPhi", true)
);

bool checkMeshCourantNo
(
    pimple.dict().getOrDefault("checkMeshCourantNo", false)
);

bool moveMeshOuterCorrectors
(
    pimple.dict().getOrDefault("moveMeshOuterCorrectors", false)
);

bool massFluxInterpolation
(
    pimple.dict().getOrDefault("massFluxInterpolation", false)
);

bool adjustFringe
(
    pimple.dict().getOrDefault("oversetAdjustPhi", false)
);

bool ddtCorr
(
    pimple.dict().getOrDefault("ddtCorr", true)
);
