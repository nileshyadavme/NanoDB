# NanoDB - A Lightweight SQL Database

NanoDB is a **miniature SQL database system** built from scratch in **C++**. It supports basic SQL operations like `CREATE TABLE`, `INSERT`, and `SELECT`. Designed for learning and performance, NanoDB implements its own **query parser, storage engine, and indexing system**.

## 🚀 Features
- Basic SQL query execution (`CREATE TABLE`, `INSERT`, `SELECT`)
- File-based storage for tables
- Indexing using **B+ Trees** (Coming soon)
- Command-line interface for interactive queries

## 📁 Project Structure
```
NanoDB/
├── src/              # Source code
│   ├── NanoDB.cpp    # Main CLI and query processor
│   ├── Parser.cpp    # SQL parser
│   ├── Storage.cpp   # Data storage and retrieval
│   ├── Index.cpp     # Indexing (B+ Tree - WIP)
│
├── data/             # Table storage files
│   ├── users.tbl
│   ├── orders.tbl
│
├── metadata/         # Schema definitions
│   ├── schema.txt
│
├── README.md         # Project documentation
```

## 🛠️ Installation & Usage
### 1️⃣ Compile the Project
```sh
g++ -o NanoDB src/*.cpp -std=c++17
```
### 2️⃣ Run NanoDB
```sh
./NanoDB
```
### 3️⃣ Example Queries
```
NanoDB> CREATE TABLE users (id INT, name TEXT);
NanoDB> INSERT INTO users VALUES (1, 'Alice');
NanoDB> SELECT * FROM users;
```

## 📌 Roadmap
- [x] Basic query parsing
- [x] File-based storage
- [ ] B+ Tree indexing
- [ ] Query optimization
- [ ] Joins & advanced SQL features

## 🤝 Contributing
Want to improve **NanoDB**? Feel free to fork, submit issues, or contribute!

## 📜 License
MIT License. Free to use and modify.# NanoDB - A Lightweight SQL Database
