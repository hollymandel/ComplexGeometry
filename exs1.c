/* Emacs: this is -*- C -*- code, */
/* generated 2019-01-16T12:28:43-08 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_5 3
#define LABEL_6 5
#define ENVIRONMENT_LABEL_3 11
#define DEBUGGING_LABEL_2 10
#define OBJECT_0 9
#define EXECUTE_CACHE_4 7
#define FREE_REFERENCES_LABEL_0 6
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
exs1_so_91e98c414aac927b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5);
      goto label_2;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_0)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_2)
  (Wrd5.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

int
decl_exs1_so_91e98c414aac927b (void)
{
  return (0);
}

DECLARE_COMPILED_CODE ("exs1.so", 2, decl_exs1_so_91e98c414aac927b, exs1_so_91e98c414aac927b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_exs1_so_data_91e98c414aac927b [102] =
  "\x0c\x01\x0d\x1d\x0c\x83\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x02"
  "\x42\x2f\x55\x73\x65\x72\x73\x2f\x68\x6f\x6c\x6c\x79\x6d\x61\x6e"
  "\x64\x65\x6c\x2f\x44\x6f\x63\x75\x6d\x65\x6e\x74\x73\x2f\x53\x70"
  "\x72\x69\x6e\x67\x20\x32\x30\x31\x38\x2f\x43\x6f\x6d\x70\x6c\x65"
  "\x78\x47\x65\x6f\x6d\x65\x74\x72\x79\x2f\x65\x78\x73\x31\x2e\x69"
  "\x6e\x66\x03\x06\x70\x72\x69\x6e\x74\x02\x02\x06\x80\x80\x04\x01"
  "\x04\x81\x81\x02\x05\x0c";

SCHEME_OBJECT *
exs1_so_data_91e98c414aac927b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_exs1_so_data_91e98c414aac927b [0]))), (sizeof (prog_exs1_so_data_91e98c414aac927b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_6]));
}

DECLARE_COMPILED_DATA_NS ("exs1.so", exs1_so_data_91e98c414aac927b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("exs1.so", "8d9b09bd54febff1")
