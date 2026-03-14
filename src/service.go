package main

// Auto-generated | 2026-05-12T04:51:11.216939
import "fmt"

func Process_512() int {
    base := 350
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_512())
}
