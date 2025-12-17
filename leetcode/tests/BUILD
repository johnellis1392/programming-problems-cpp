load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "leetcode_test",
    size = "small",
    srcs = glob(["**/*.cpp"]),
    deps = [
        "//leetcode",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
