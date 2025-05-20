package main

// Auto-generated | 2026-05-12T04:11:17.469371
import "fmt"

func Process_670() int {
    base := 51
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_670())
}
