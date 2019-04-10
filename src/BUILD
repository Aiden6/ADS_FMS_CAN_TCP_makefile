package(default_visibility = ["//visibility:public"])

cc_library(
    name = "libidriving_can",
    srcs = ["libidriving_can.so"],
    hdrs = ["idriving_api.h"],
)
cc_library(
    name = "libusbcan",
    srcs = [
        "libusbcan.so",
        "libusbcan.so.1",
    ],
    hdrs = ["controlcan.h"],
)


cc_library(
    name = "api_test",
    srcs = [
        "api_test_autodrive.c",
        "api_test_get_demo.c",
        "api_test_get.c",
        "api_test_set_demo.c",
        "api_test_set.c",
        "api_test.c",
    ],
    hdrs = [
        "api_test.h",
        "idriving_api.h",
        "controlcan.h",
        "std_types.h",
    ],
    deps = [
        ":libidriving_can",
        ":libusbcan",
    ],

)


cc_library(
    name = "byd_control_thread",
    srcs = [
        "byd_control_thread.c",
    ],
    hdrs = [
        "byd_control_thread.h",
        "control.h",
        "api_test.h",
        "idriving_api.h",
        "controlcan.h",
        "std_types.h",
    ],
    deps = [
        ":api_test",
        ":libidriving_can",
        ":libusbcan",
    ],

)
cc_library(
    name = "control",
    srcs = [
        "control.c",

    ],
    hdrs = [
        "control.h",
        "std_types.h",
        "api_test.h",
        "controlcan.h",

    ],
    deps = [
        ":libidriving_can",
        ":libusbcan",

    ],

)



cc_library(
    name = "thread_define",
    srcs = [
        "thread_define.c",
    ],
    hdrs = [
        "thread_define.h",
    ],

)

cc_binary(
    name = "main",
    srcs = ["main.c"],

    deps = [
        ":api_test",
        ":byd_control_thread",
        ":control",
        ":thread_define",
        ":libidriving_can",
        ":libusbcan",

    ],
    linkopts = [
        "-L/usr/lib",
        "-lboost_system",
        "-lboost_thread",
        "-lboost_filesystem",
        "-lpthread",
        "-lstdc++",
        "-lcrypto",
        "-lusbcan",
        "-lm",
        "-lrt",
        "-lidriving_can",
    ],
    
)


