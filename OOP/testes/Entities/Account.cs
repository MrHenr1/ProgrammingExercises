namespace testes.Entities {
    class Account {
        public int Number { get; private set; }
        public string Holder { get; private set; }
        public double Balance { get; protected set; }

        public Account() { }
        public Account(int number, string holder, double balance) {
            Number = number;
            Holder = holder;
            Balance = balance;
        }

        public void withdraw(double amount) {
            if (amount > 0)
                Balance -= amount;
        }

        public void deposit(double amount) {
            if (amount > 0)
                Balance += amount;
        }
    }
}
