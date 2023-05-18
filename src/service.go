package main

// Auto-generated | 2026-05-13T20:38:25.807065
import "fmt"

func Process_372() int {
    base := 380
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}
