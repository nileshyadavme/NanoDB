//
// Created by nilesh on 31-03-2025.
//
#include <iostream>
#include <string>
#include "QueryProcessor.h"

int main() {
  std::cout << "NanoDB SQL Mode. Type 'EXIT;' to quit.\n";

  std::string query;
  while (true) {
    std::cout << "nanodb> ";  // Prompt like MySQL
    std::getline(std::cin, query);

    if (query == "EXIT;") {
      std::cout << "Exiting NanoDB...\n";
      break;
    }

    QueryProcessor::process(query);  // Call query processor
  }

  return 0;
}

