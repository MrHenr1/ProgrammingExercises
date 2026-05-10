using System;
using System.Collections.Generic;
using System.Text;

namespace Ex25 {
    class Personagem {
        public double Vida;
        public double DanoAtaque;

        public virtual void Atacar() {
            Console.WriteLine("Inimigo Atacado!");
        }
    }
}
