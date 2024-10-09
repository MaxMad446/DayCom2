package main

// Auto-generated | 2026-05-12T03:41:53.729878
import "fmt"

func Process_879() int {
    base := 350
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
