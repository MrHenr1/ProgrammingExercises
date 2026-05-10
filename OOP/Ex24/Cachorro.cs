namespace Ex24 {
    class Cachorro : Animal {
        public Cachorro() { }

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Au au au");
        }
    }
}
