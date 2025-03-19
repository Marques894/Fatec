-- --------------------------------------------------------
-- Servidor:                     127.0.0.1
-- Versão do servidor:           10.4.32-MariaDB - mariadb.org binary distribution
-- OS do Servidor:               Win64
-- HeidiSQL Versão:              12.10.0.7000
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Copiando estrutura do banco de dados para veiculos
CREATE DATABASE IF NOT EXISTS `veiculos` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci */;
USE `veiculos`;

-- Copiando estrutura para tabela veiculos.categorias
CREATE TABLE IF NOT EXISTS `categorias` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descricao` varchar(60) DEFAULT NULL,
  `valormaodeobra` decimal(10,2) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

-- Copiando estrutura para tabela veiculos.clientes
CREATE TABLE IF NOT EXISTS `clientes` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `nome` varchar(120) NOT NULL,
  `endereco` varchar(120) NOT NULL,
  `telefone` varchar(15) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

-- Copiando estrutura para tabela veiculos.funcionarios
CREATE TABLE IF NOT EXISTS `funcionarios` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `idcategorias` int(10) unsigned NOT NULL,
  `nome` varchar(120) NOT NULL,
  `endereco` varchar(120) NOT NULL,
  `telefone` varchar(15) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `Funcionarios_FKIndex1` (`idcategorias`),
  CONSTRAINT `funcionarios_ibfk_1` FOREIGN KEY (`idcategorias`) REFERENCES `categorias` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

-- Copiando estrutura para tabela veiculos.pecas
CREATE TABLE IF NOT EXISTS `pecas` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descricao` varchar(60) NOT NULL,
  `custounitario` decimal(10,2) NOT NULL,
  `estoque` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

-- Copiando estrutura para tabela veiculos.reparacoes
CREATE TABLE IF NOT EXISTS `reparacoes` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `idfuncionarios` int(10) unsigned NOT NULL,
  `idveiculos` int(10) unsigned NOT NULL,
  `idclientes` int(10) unsigned NOT NULL,
  `data_servico` date NOT NULL,
  `tempo_servico` int(10) unsigned NOT NULL,
  `custo_servico` decimal(10,2) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `Reparacoes_FKIndex1` (`idfuncionarios`),
  KEY `Reparacoes_FKIndex2` (`idveiculos`),
  CONSTRAINT `reparacoes_ibfk_1` FOREIGN KEY (`idfuncionarios`) REFERENCES `funcionarios` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `reparacoes_ibfk_2` FOREIGN KEY (`idveiculos`) REFERENCES `veiculos` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

-- Copiando estrutura para tabela veiculos.reparacoes_pecas
CREATE TABLE IF NOT EXISTS `reparacoes_pecas` (
  `idpecas` int(10) unsigned NOT NULL,
  `idreparacoes` int(10) unsigned NOT NULL,
  `quantidade` int(10) unsigned NOT NULL,
  `precounitario` int(10) unsigned NOT NULL,
  PRIMARY KEY (`idpecas`,`idreparacoes`),
  KEY `Reparacoes_has_Pecas_FKIndex1` (`idreparacoes`),
  KEY `Reparacoes_has_Pecas_FKIndex2` (`idpecas`),
  CONSTRAINT `reparacoes_pecas_ibfk_1` FOREIGN KEY (`idreparacoes`) REFERENCES `reparacoes` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `reparacoes_pecas_ibfk_2` FOREIGN KEY (`idpecas`) REFERENCES `pecas` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

-- Copiando estrutura para tabela veiculos.veiculos
CREATE TABLE IF NOT EXISTS `veiculos` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `idclientes` int(10) unsigned NOT NULL,
  `marca` varchar(50) NOT NULL,
  `modelo` varchar(50) NOT NULL,
  `cor` varchar(30) NOT NULL,
  `placa` varchar(10) NOT NULL,
  `chassi` varchar(50) NOT NULL,
  `anofabricacao` int(10) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `Veiculos_FKIndex1` (`idclientes`),
  CONSTRAINT `veiculos_ibfk_1` FOREIGN KEY (`idclientes`) REFERENCES `clientes` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- Exportação de dados foi desmarcado.

/*!40103 SET TIME_ZONE=IFNULL(@OLD_TIME_ZONE, 'system') */;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;



INSERT INTO `categorias` (`descricao`, `valormaodeobra`) VALUES
('Mecânico de Suspensão e Direção', 250.00),
('Mecânico de Motor e Transmissão', 300.00),
('Eletricista', 400.00),
('Mecânico Geral', 500.00),
('Mecânico de Ar Condicionado', 150.00);


INSERT INTO `clientes` (`nome`, `endereco`, `telefone`) VALUES
('Carlos Silva', 'Rua das Flores, 123', '(11) 98765-4321'),
('Maria Oliveira', 'Avenida Central, 456', '(21) 99876-5432'),
('João Pereira', 'Praça da Liberdade, 789', '(31) 91234-5678'),
('Ana Souza', 'Rua do Comércio, 321', '(41) 93456-7890'),
('Fernando Lima', 'Alameda das Palmeiras, 654', '(51) 94567-8901');


INSERT INTO `funcionarios` (`idcategorias`, `nome`, `endereco`, `telefone`) VALUES
(1, 'José Almeida', 'Rua das Acácias, 100', '(11) 99876-5432'),
(2, 'Mariana Santos', 'Avenida Paulista, 200', '(21) 98765-4321'),
(3, 'Ricardo Mendes', 'Rua das Laranjeiras, 300', '(31) 91234-5678'),
(4, 'Fernanda Costa', 'Praça XV, 400', '(41) 93456-7890'),
(5, 'Lucas Pereira', 'Alameda das Rosas, 500', '(51) 94567-8901');


INSERT INTO `pecas` (`descricao`, `custounitario`, `estoque`) VALUES
('Filtro de óleo', 25.50, 100),
('Pastilha de freio', 120.00, 50),
('Bateria 60Ah', 350.00, 30),
('Correia dentada', 80.00, 40),
('Vela de ignição', 15.00, 200);

INSERT INTO `veiculos` (`idclientes`, `marca`, `modelo`, `cor`, `placa`, `chassi`, `anofabricacao`) VALUES
(1, 'Ford', 'Fiesta', 'Prata', 'ABC-1234', '9BWZZZ377VT004251', 2018),
(2, 'Chevrolet', 'Onix', 'Branco', 'DEF-5678', '8AWZZZ123KT009876', 2020),
(3, 'Toyota', 'Corolla', 'Preto', 'GHI-9012', '7CWZZZ987XT005432', 2019),
(4, 'Honda', 'Civic', 'Vermelho', 'JKL-3456', '6DWZZZ654RT002134', 2021),
(5, 'Volkswagen', 'Gol', 'Azul', 'MNO-7890', '5EWZZZ321LT001789', 2017);

INSERT INTO `reparacoes` (`idfuncionarios`, `idveiculos`, `idclientes`, `data_servico`, `tempo_servico`, `custo_servico`) VALUES
(1, 1, 1, '2024-02-20', 3, 250.00),
(2, 2, 2, '2024-02-21', 5, 400.00),
(3, 3, 3, '2024-02-22', 2, 180.00),
(4, 4, 4, '2024-02-23', 4, 350.00),
(5, 5, 5, '2024-02-24', 6, 500.00);

INSERT INTO `reparacoes_pecas` (`idpecas`, `idreparacoes`, `quantidade`, `precounitario`) VALUES
(1, 1, 2, 25),  -- 2 Filtros de óleo na reparação 1
(2, 2, 1, 120), -- 1 Pastilha de freio na reparação 2
(3, 3, 1, 350), -- 1 Bateria na reparação 3
(4, 4, 2, 80),  -- 2 Correias dentadas na reparação 4
(5, 5, 4, 15);  -- 4 Velas de ignição na reparação 5

