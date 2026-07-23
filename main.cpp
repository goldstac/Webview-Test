#include "webview.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
std::string read_file(const std::string &filepath) {
  std::ifstream file(filepath);
  std::stringstream buffer;
  buffer << file.rdbuf();
  return buffer.str();
}
int main() {
  webview::webview w(true, nullptr);
  w.set_title("Desktop App");
  w.set_size(600, 400, WEBVIEW_HINT_NONE);
  std::string content = read_file("index.html");
  w.set_html("content");
  w.run();
  return 0;
}
