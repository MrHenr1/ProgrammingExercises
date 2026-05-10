namespace Ex24 {
    class Animal {
        public char sexo;
        public string raca;
        public string nome;

        public virtual void EmitirSom() {
            Console.WriteLine("O animal emitiu um som!");
        }

        public void Dormir() {
            Console.WriteLine("O animal está dormindo!");
        }

        public void Caminhar() {
            Console.WriteLine("O animal caminhou!");
        }
    }
}
