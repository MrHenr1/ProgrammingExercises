namespace testes.Entities {
    class SavingAccount : Account {
        public double InterestRate { get; set; }
        public SavingAccount() { }
        public SavingAccount(int number, string holder, double balance, double interestrate) : base(number, holder, balance) {
            InterestRate = interestrate;
        }
        public void updateBalance() {
            Balance += Balance * InterestRate;
        }
    }
}
