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
(1, 4, 1, 1),
(1, 6, 1, 1),
(2, 3, 1, 1),
(2, 5, 1, 1),
(2, 7, 1, 1),
(2, 10, 1, 1),
(3, 4, 1, 1),
(3, 5, 1, 1),
(4, 6, 1, 1),
(4, 9, 1, 1),
(5, 7, 1, 1),
(6, 7, 1, 1),
(6, 8, 1, 1),
(7, 8, 1, 1);

SELECT * FROM pgr_edgeColoring (
     'SELECT id, source, target, cost,
     reverse_cost FROM edge_table
     ORDER BY id'
);

/*************OUTPUT******************
    edge_id | color_id
------------+----------
         1  |        5
         2  |        1
         3  |        3
         4  |        4
         5  |        2
         6  |        1
         7  |        1
         8  |        2
         9  |        3
         10 |        2
         11 |        5
         12 |        4
         13 |        2
         14 |        1
(14 rows)
*************************************/
