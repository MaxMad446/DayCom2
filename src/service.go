package main

// Auto-generated | 2026-05-11T22:16:11.775383
import "fmt"

func Process_675() int {
    base := 13
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}
