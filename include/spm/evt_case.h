#pragma once

#include <common.h>
#include <evt_cmd.h>

CPP_WRAPPER(spm::evt_case)

// evt_run_case_evt(int caseType, int unk, const char * a2Name, const char * a3Name, EvtScriptCode * script, unk)
EVT_DECLARE_USER_FUNC(evt_run_case_evt, 6)

UNKNOWN_FUNCTION(evtRunCaseEntry)

EVT_DECLARE_USER_FUNC(evt_exit_case_evt, 0)

EVT_DECLARE_USER_FUNC(evt_del_case_evt, 2)

UNKNOWN_FUNCTION(evt_set_case_wrk)
UNKNOWN_FUNCTION(func_800e0f30)
UNKNOWN_FUNCTION(func_800e0f70)


CPP_WRAPPER_END()
