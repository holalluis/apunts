/*Block class*/
class Block{
  constructor(index, prev_hash, timestamp, data){
    this.index     = index;     //int
    this.prev_hash = prev_hash; //String
    this.timestamp = timestamp; //Date
    this.data      = data;      //String
  };
  /* The block needs to be hashed to keep the integrity of the data.
   * A SHA-256 is taken over the content of the block*/
  get hash(){
    return sha256(this.index+this.prev_hash+this.timestamp+this.data).toString();
  };
};

/*init blockchain with the genesis block which has to be hardcoded*/
let Blockchain=[
  //syntax-(index, prev_hash, timestamp,                 data)
  new Block(0,     "0",       new Date().getTime()/1000, "genesis block data");
];

/*new block*/
function newBlock(newData){
  let prevBlock    = Blockchain[Blockchain.length-1];
  let newIndex     = prevBlock.index+1;
  let newTimestamp = new Date().getTime()/1000;
  return new Block(newIndex, prevBlock.hash, newTimestamp, newData);
};

/*Validating new blocks*/
function addBlock(new_block, prev_block){
  if(new_block.index     != prev_block.index+1) return false;
  if(new_block.prev_hash != prev_block.hash)    return false;
  }else if(calculateHashForBlock(newBlock) !== newBlock.hash) {
    console.log('invalid hash: ' + calculateHashForBlock(newBlock) + ' ' + newBlock.hash);
    return false;
  }
  return true;
};

/*Choosing the longest chain*/
/*There should always be only one explicit set of blocks 
in the chain at a given time. 
In case of conflicts (e.g. two nodes both generate block number 72) 
we choose the chain that has the longest number of blocks.*/
let replaceChain = function(newBlocks) {
  if (isValidChain(newBlocks) && newBlocks.length > blockchain.length) {
    console.log('Received blockchain is valid. Replacing current blockchain with received blockchain');
    blockchain = newBlocks;
    broadcast(responseLatestMsg());
  } else {
    console.log('Received blockchain invalid');
  }
};

/*Communicating with other nodes
An essential part of a node is to share and sync the blockchain with other nodes. 
The following rules are used to keep the network in sync.
When a node generates a new block, it broadcasts it to the network
When a node connects to a new peer it querys for the latest block
When a node encounters a block that has an index larger than the current known block, 
it either adds the block the its current chain or querys for the full blockchain.*/
