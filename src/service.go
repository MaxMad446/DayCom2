package main

// Auto-generated | 2026-05-12T04:45:34.520644
import "fmt"

func Process_452() int {
    base := 396
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_452())
}
