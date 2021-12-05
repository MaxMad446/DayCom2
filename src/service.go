package main

// Auto-generated | 2026-05-11T20:41:44.971771
import "fmt"

func Process_964() int {
    base := 15
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_964())
}
