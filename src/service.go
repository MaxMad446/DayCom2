package main

// Auto-generated | 2026-05-12T04:11:09.840028
import "fmt"

func Process_704() int {
    base := 287
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
