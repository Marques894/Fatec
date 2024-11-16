function compra() {

    var banana = document.getElementById("banana");
    var maca = document.getElementById("maca");
    var manga = document.getElementById("manga");
    var Laranja = document.getElementById("laranja");


    outProduto.textContent = "Produto: " + Produto;
    outQuantidade.textContent = "Quantidade: " + quatidade;
    outValorDesconto.textContent = "Valor do desconto: " + valorDesconto;
    outValorTotal = "Valor da Compra: " + valorTotal

}

var btVerPromocao = document.getElementById("btVerPromocao");

btVerPromocao.addEventListener("click", compra);