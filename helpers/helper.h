/*
 * helper.h
 *
 * Convenience macros simplifying ZMK's keymap configuration.
 */

#pragma once

#define ZMK_HELPER_STRINGIFY(x) #x

#define UC_MODMORPH(name, uc_binding, shifted_uc_binding) \
    / { \
        behaviors { \
            name: name { \
                compatible = "zmk,behavior-mod-morph"; \
                label = ZMK_HELPER_STRINGIFY(UC_MORPH_ ## name); \
                #binding-cells = <0>; \
                bindings = <&kp uc_binding>, <&kp shifted_uc_binding>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
        }; \
    };
    