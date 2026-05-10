using System;
using System.Collections.Generic;
using System.Text;

namespace Ex24 {
    class Passaro : Animal {
        public Passaro() { }

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Beem te vi... Bem te vii...");
        }
    }
}
