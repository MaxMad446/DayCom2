package main

// Auto-generated | 2026-05-14T18:18:58.611841
import "fmt"

func Process_228() int {
    base := 320
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
