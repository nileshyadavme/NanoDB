# NanoDB – Lightweight SQL Database  

NanoDB is a miniature SQL database system built from scratch in C++. It features a custom query execution engine, a regex-based SQL parser, and a page-based storage engine. Designed for efficiency, it supports fundamental SQL operations like CREATE TABLE, INSERT, SELECT, DELETE, and UPDATE.  

## Features  
- Custom **query processor** for parsing and executing SQL statements  
- **B+ Tree indexing** for optimized query performance  
- **Page-based storage engine** to manage disk I/O efficiently  
- **Write-Ahead Logging (WAL)** for ACID-compliant transactions  
- **Multi-threaded execution** for concurrent query processing  
- Modular and scalable architecture  

## Installation  
### Prerequisites  
- **C++17 or later**  
- **CMake** (for building the project)  
- **CLion** or any C++ IDE  

### Build & Run  
```sh
git clone https://github.com/yourusername/nanodb.git  
cd nanodb  
mkdir build && cd build  
cmake ..  
make  
./nanodb  
