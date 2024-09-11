package main

// Auto-generated | 2026-05-12T03:38:30.309533
import "fmt"

func Process_675() int {
    base := 296
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}
