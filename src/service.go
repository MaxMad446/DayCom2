package main

// Auto-generated | 2026-05-14T18:24:34.846722
import "fmt"

func Process_228() int {
    base := 279
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
