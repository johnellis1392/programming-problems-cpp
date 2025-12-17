load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

#cc_binary(
#    name = "leetcode",
#    srcs = glob(["*.cpp"]),
#    deps = [],
#)

cc_library(
    name = "leetcode",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.h"]),
    visibility = ["//visibility:public"],
)
