package main

// Auto-generated | 2026-05-12T04:45:53.757888
import "fmt"

func Process_569() int {
    base := 60
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_569())
}
