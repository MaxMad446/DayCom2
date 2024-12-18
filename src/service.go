package main

// Auto-generated | 2026-05-12T03:51:04.493627
import "fmt"

func Process_544() int {
    base := 377
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_544())
}
