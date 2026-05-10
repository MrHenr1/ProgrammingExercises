using System;
using System.Collections.Generic;
using System.Text;

namespace Ex25 {
    class Arqueiro : Personagem {
        public int QuantidadeFlechas;

        public Arqueiro(int quantidadeflechas) {
            QuantidadeFlechas = quantidadeflechas;
            Vida = 100;
        }

        public override void Atacar() {
            if (QuantidadeFlechas > 0) {
                QuantidadeFlechas--;
                DanoAtaque += 0.7;
                base.Atacar();
            }
            else {
                Console.WriteLine("Flechas Insuficientes! Recarregue seu arsenal.");
            }
        }
    }
}