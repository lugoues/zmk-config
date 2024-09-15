#pragma once

#include "zmk-helpers/helper.h"
#include "constants.h"

/* Homerow mods */
#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS) \
    ZMK_HOLD_TAP(NAME, \
        flavor = "balanced"; \
        tapping-term-ms = <TD_TAPPING_TERM>; \
        quick-tap-ms = <QUICK_TAP_MS>; \
        require-prior-idle-ms = <150>; \
        bindings = <HOLD>, <TAP>; \
        hold-trigger-key-positions = <TRIGGER_POS>; \
        hold-trigger-on-release; \
    )


