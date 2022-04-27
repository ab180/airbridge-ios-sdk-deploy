// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "AirBridge",
    products: [
        .library(
            name: "AirBridge",
            targets: ["AirBridge"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "AirBridge",
            path: "AirBridge.xcframework"),
    ]
)