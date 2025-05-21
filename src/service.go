package main

// Auto-generated | 2026-05-12T04:11:26.978462
import "fmt"

func Process_437() int {
    base := 298
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
