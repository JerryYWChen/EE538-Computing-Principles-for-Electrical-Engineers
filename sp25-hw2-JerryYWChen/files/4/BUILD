cc_library(
    name = "CPPLib",
    srcs = ["q.cc"],
    hdrs = ["q.h"],
    visibility = ["//visibility:private"],
)

cc_test(
    name = "student_test",
    srcs = ["student_test.cc"],
    copts = ["--std=c++17"],
    deps = [
        ":CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)
