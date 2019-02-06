//array some, array.every (true, false)
  array.prototype.every(el=>condition) //tots els elements de l'array compleixen
  array.prototype.some(el=>condition)  //al menys un element compleix

//classe exemple: propietats, mètodes
  class Rectangle {
    //s'ha de dir "constructor" per quan fem "let r = new Rectangle()"
    constructor(height, width){
      this.name = 'Rectangle';
      this.height = height;
      this.width = width;
    }

    //normal method
    sayName() { console.log('Hi, I am a ', this.name + '.'); }

    //get and set property 'area'
    get area()      { return this.height * this.width; }
    set area(value) { this.height = this.width = Math.sqrt(value); }
  };
  let r = new Rectangle(3,5);
  console.log(r);
  console.log(r.area);

  r.area=25; //!!!!!
  console.log(r.area);
  console.log(r);

//strings fàcils amb variables dins
  let nom="lluis", edat=29;
  console.log(`hola em dic ${nom} i tinc ${edat} anys`);
