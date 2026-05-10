namespace Ex26 {
    class Program {
        static void Main() {
            List <Animal> animais = new List<Animal>();
            Cachorro c1 = new Cachorro();
            Gato g1 = new Gato();
            animais.Add(c1);
            animais.Add(g1);

            foreach (var animal in animais) {
                animal.EmitirSom();
            }
        }
    }
}