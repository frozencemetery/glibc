#include <fnmatch.h>
#include <stdio.h>
#include <support/support.h>
#include <support/check.h>

static int
do_test (void)
{
  char pattern[] = "[a-c]";
  const char *string = "a";

  xsetlocale (LC_ALL, "C.UTF-8");
  TEST_VERIFY (fnmatch (pattern, string, 0) == 0);

  return 0;
}

#include <support/test-driver.c>
