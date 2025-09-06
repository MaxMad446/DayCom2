package main

// Auto-generated | 2026-05-12T04:25:36.857873
import "fmt"

func Process_263() int {
    base := 186
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
