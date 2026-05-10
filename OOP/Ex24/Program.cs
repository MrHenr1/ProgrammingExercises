namespace Ex24 {
    class Program {
        static void Main() {
            List<Animal> animais = new List<Animal>();
            Cachorro c1 = new Cachorro();
            Gato g1 = new Gato();
            Passaro p1 = new Passaro();
            Peixe px1 = new Peixe();
            
            animais.Add(c1);
            animais.Add(g1);
            animais.Add(p1);
            animais.Add(px1);

            foreach (var animal in animais) {
                animal.EmitirSom();
            }
        }
    }
}