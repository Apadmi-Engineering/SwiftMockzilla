// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftMockzilla",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "SwiftMockzilla",
            targets: ["SwiftMockzilla"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "SwiftMockzilla",
            dependencies: []),
        .binaryTarget(
            name: "mockzilla",
            url: "https://firebasestorage.googleapis.com/v0/b/mockzilla-cloud.appspot.com/o/mockzilla.xcframework.zip?alt=media&token=757839e0-cc75-4ecf-b62a-4e2e4a86f7c2",
            checksum: "eee5c8e6deba83d13be31543509832726d2a2e32ec4d7208b264dd83228605f8"
        ),
        .testTarget(
            name: "SwiftMockzillaTests",
            dependencies: ["SwiftMockzilla"]),
    ]
)
