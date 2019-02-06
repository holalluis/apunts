#Node

#Module exports
  You can require any js file, you just need to declare what you want to expose.

  //tools.js
  module.exports={
    foo:function(){},
    bar:function(){}
  };
  var zemba=function(){};


  And in your app file:

  //app.js
  var tools = require('./tools');
  console.log(typeof tools.foo);   // =>'function'
  console.log(typeof tools.bar);   // =>'function'
  console.log(typeof tools.zemba); // => undefined
