using System;
using System.Collections.Generic;
using System.Text;

namespace Ex24 {
    class Peixe : Animal {
        public Peixe() { }

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Glu glu glu");
        }
    }
}
