// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "AirBridge",
    platforms: [
        .iOS(.v9),
    ],
    products: [
        .library(
            name: "AirBridge",
            targets: ["_AirBridgeWrapper"]
        ),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "_AirBridgeWrapper",
            dependencies: ["AirBridge"],
            path: "Source/AirBridgeWrapper",
            linkerSettings: [
                .linkedFramework("AdSupport"),
                .linkedFramework("iAd"),
                .linkedFramework("AdServices"),
                .linkedFramework("CoreTelephony"),
                .linkedFramework("StoreKit"),
                .linkedFramework("AppTrackingTransparency"),
                .linkedFramework("WebKit"),
            ]
        ),
        .binaryTarget(
            name: "AirBridge",
            path: "Source/AirBridge.xcframework"
        ),
    ]
)
