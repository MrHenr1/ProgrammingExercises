using System;
using System.Collections.Generic;
using System.Text;

namespace Ex24 {
    class Gato : Animal {
        public Gato() { }

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Miaaar... Miaaaar... (Gato veio de família mineira)");
        }
    }
}
