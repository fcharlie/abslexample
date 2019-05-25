#include <absl/strings/str_cat.h>
#include <absl/strings/str_format.h>

int main() {
  char32_t sparkling_heart = 0x1F496;
  auto s = absl::StrCat("I have a ", sparkling_heart, " !");
  absl::FPrintF(stderr, "Tom say: %s\n", s);
  return 0;
}
