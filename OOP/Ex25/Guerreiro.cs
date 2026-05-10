namespace Ex25 {
    class Guerreiro : Personagem {
        public Guerreiro() {
            Vida = 100;
        }
        public override void Atacar() {
            int danochance = Random.Shared.Next(1, 10);
            if (danochance <= 3) {
                DanoAtaque += 0.5 * 2;
            }
            else {
                DanoAtaque += 0.5;
            }
            base.Atacar();
        }
    }
}
