# Expense Tracker

A simple, console-based **Income and Expense Tracking System** built using **C++**. This application helps users manage their daily finances by logging income sources and expenses, while dynamically calculating the net wallet balance.

## 🚀 Features

- **Add Balance:** Log income details with a specific source and amount.
- **Add Expense:** Log spending details with a reason and amount.
- **Net Balance Summary:** Instantly calculate and view your total net savings.
- **Structured Data:** Uses C++ `struct` and global arrays to manage transaction history smoothly.

## 🛠️ How It Works

1. **Menu Options:** The program runs in a continuous loop offering 4 distinct choices.
2. **Data Logging:** It tracks up to 100 entries for both income and expenses using custom `Transaction` structures.
3. **Input Handling:** Combines `getline()` and standard input streams to safely handle multi-word descriptions (e.g., "Salary from job") and numerical amounts.

## 💻 How to Run

1. Clone or copy the source code into a file named `expense_tracker.cpp`.
2. Open your terminal or command prompt.
3. Compile the code using a C++ compiler (like `g++`):
   ```bash
   g++ main.cpp -o ExpenseTracker
   ```
4. Run the compiled application:
   ```bash
   ./ExpenseTracker
   ```

## 📄 License

This project is open-source and free to use for educational purposes.
