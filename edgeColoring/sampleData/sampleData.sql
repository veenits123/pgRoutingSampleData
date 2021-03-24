DROP TABLE IF EXISTS edge_table;

CREATE TABLE edge_table (
      id BIGSERIAL,
      source BIGINT,
      target BIGINT,
      cost FLOAT,
      reverse_cost FLOAT
);

INSERT INTO edge_table (
      source, target,
      cost, reverse_cost) VALUES
(1, 2, 1, 1),
(2, 3, 1, 1),
(3, 4, 1, 1),
(2, 5, 1, 1),
(3, 6, 1, 1),
(7, 8, 1, 1),
(5, 8, 1, 1),
(5, 6, 1, 1),
(6, 9, 1, 1),
(5, 10, 1, 1),
(6, 11, 1, 1),
(10, 11, 1, 1),
(11, 12, 1, 1),
(10, 13, 1, 1),
(9, 12, 1, 1),
(4, 9, 1, 1),
(14, 15, 1, 1),
(16, 17, 1, 1);

SELECT * FROM pgr_edgeColoring (
     'SELECT id, source, target, cost,
     reverse_cost FROM edge_table
     ORDER BY id'
);

/*************OUTPUT******************

*************************************/
