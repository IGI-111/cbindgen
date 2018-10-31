#include <cstdint>
#include <cstdlib>

struct PREFIXBar {
  int32_t a;
};

struct PREFIXFoo {
  int32_t a;
  uint32_t b;
  PREFIXBar bar;
};

static const PREFIXFoo PREFIXVAL = (PREFIXFoo){ .a = 42, .b = 1337, .bar = (PREFIXBar){ .a = 323 } };

extern "C" {

void root(PREFIXFoo x);

} // extern "C"
